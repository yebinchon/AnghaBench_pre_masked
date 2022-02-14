
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; } ;
struct tempfile {scalar_t__ fd; TYPE_1__ filename; } ;


 int FUNC_0 (struct tempfile*) ;
 int FUNC_1 (struct tempfile*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int,int) ;
 struct tempfile* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,char*,char const*,char const*) ;

struct tempfile *FUNC_6(const char *VAR_0, int VAR_1, int VAR_2)
{
 struct tempfile *VAR_3 = FUNC_4();
 const char *VAR_4;

 VAR_4 = FUNC_2("TMPDIR");
 if (!VAR_4)
  VAR_4 = "/tmp";

 FUNC_5(&VAR_3->filename, "%s/%s", VAR_4, VAR_0);
 VAR_3->fd = FUNC_3(VAR_3->filename.buf, VAR_1, VAR_2);
 if (VAR_3->fd < 0) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 FUNC_0(VAR_3);
 return VAR_3;
}
