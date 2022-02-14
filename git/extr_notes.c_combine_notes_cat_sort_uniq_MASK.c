
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {int len; int buf; } ;
typedef struct object_id const object_id ;


 struct strbuf VAR_0 ;
 struct string_list VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct string_list*,int ,struct strbuf*) ;
 int FUNC_1 (struct strbuf*) ;
 scalar_t__ FUNC_2 (struct string_list*,struct object_id const*) ;
 int FUNC_3 (struct string_list*,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct string_list*,int ) ;
 int FUNC_5 (struct string_list*,int ) ;
 int FUNC_6 (struct string_list*) ;
 int FUNC_7 (int ,int ,int ,struct object_id const*) ;

int FUNC_8(struct object_id *VAR_4,
    const struct object_id *VAR_5)
{
 struct string_list VAR_6 = VAR_1;
 struct strbuf VAR_7 = VAR_0;
 int VAR_8 = 1;


 if (FUNC_2(&VAR_6, VAR_4))
  goto out;
 if (FUNC_2(&VAR_6, VAR_5))
  goto out;
 FUNC_5(&VAR_6, 0);
 FUNC_6(&VAR_6);
 FUNC_4(&VAR_6, 0);


 if (FUNC_0(&VAR_6,
     VAR_3, &VAR_7))
  goto out;

 VAR_8 = FUNC_7(VAR_7.buf, VAR_7.len, VAR_2, VAR_4);

out:
 FUNC_1(&VAR_7);
 FUNC_3(&VAR_6, 0);
 return VAR_8;
}
