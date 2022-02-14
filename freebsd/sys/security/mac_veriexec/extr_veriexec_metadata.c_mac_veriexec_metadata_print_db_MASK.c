
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veriexec_devhead {int dummy; } ;
struct sbuf {int dummy; } ;
typedef int fpdbs ;


 int FUNC_0 (struct sbuf*,struct veriexec_devhead*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sbuf*,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_4(struct sbuf *VAR_3)
{
 struct {
  struct veriexec_devhead *h;
  const char *name;
 } VAR_4[] = {
  { &VAR_2, "regular files" },
  { &VAR_1, "executable files" },
 };
 int VAR_5;

 FUNC_1(&VAR_0);
 for (VAR_5 = 0; VAR_5 < sizeof(VAR_4)/sizeof(VAR_4[0]); VAR_5++) {
  FUNC_3(VAR_3, "%s fingerprint db:\n", VAR_4[VAR_5].name);
  FUNC_0(VAR_3, VAR_4[VAR_5].h);
 }
 FUNC_2(&VAR_0);
}
