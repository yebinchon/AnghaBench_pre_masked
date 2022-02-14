
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int ptr; } ;
struct write_data {int in_section; TYPE_1__ buffered_comment; int buf; int section; scalar_t__ value; int preg; } ;
typedef int git_config_parser ;


 int GIT_UNUSED (int *) ;
 int git_buf_clear (TYPE_1__*) ;
 int git_buf_put (int ,int ,int ) ;
 scalar_t__ strcmp (char const*,int ) ;
 int write_line (struct write_data*,char const*,size_t) ;
 int write_value (struct write_data*) ;

__attribute__((used)) static int write_on_section(
 git_config_parser *reader,
 const char *current_section,
 const char *line,
 size_t line_len,
 void *data)
{
 struct write_data *write_data = (struct write_data *)data;
 int result = 0;

 GIT_UNUSED(reader);






 if (write_data->in_section && !write_data->preg && write_data->value)
  result = write_value(write_data);

 write_data->in_section = strcmp(current_section, write_data->section) == 0;




 if (!result) {
  result = git_buf_put(write_data->buf, write_data->buffered_comment.ptr, write_data->buffered_comment.size);
  git_buf_clear(&write_data->buffered_comment);
 }

 if (!result)
  result = write_line(write_data, line, line_len);

 return result;
}
