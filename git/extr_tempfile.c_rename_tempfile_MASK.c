
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; } ;
struct tempfile {TYPE_1__ filename; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct tempfile*) ;
 int FUNC_2 (struct tempfile*) ;
 int FUNC_3 (struct tempfile**) ;
 int VAR_0 ;
 int FUNC_4 (struct tempfile*) ;
 scalar_t__ FUNC_5 (int ,char const*) ;

int FUNC_6(struct tempfile **VAR_1, const char *VAR_2)
{
 struct tempfile *VAR_3 = *VAR_1;

 if (!FUNC_4(VAR_3))
  FUNC_0("rename_tempfile called for inactive object");

 if (FUNC_1(VAR_3)) {
  FUNC_3(VAR_1);
  return -1;
 }

 if (FUNC_5(VAR_3->filename.buf, VAR_2)) {
  int VAR_4 = VAR_0;
  FUNC_3(VAR_1);
  VAR_0 = VAR_4;
  return -1;
 }

 FUNC_2(VAR_3);
 *VAR_1 = ((void*)0);
 return 0;
}
