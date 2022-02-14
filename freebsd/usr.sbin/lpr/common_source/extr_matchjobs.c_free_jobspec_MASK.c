
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jobspec_hdr {int dummy; } ;
struct jobspec {struct jobspec* matcheduser; struct jobspec* fmtoutput; } ;


 int FUNC_0 (struct jobspec_hdr*) ;
 struct jobspec* FUNC_1 (struct jobspec_hdr*) ;
 int FUNC_2 (struct jobspec_hdr*,int ) ;
 int FUNC_3 (struct jobspec*) ;
 int VAR_0 ;

void
FUNC_4(struct jobspec_hdr *VAR_1)
{
 struct jobspec *VAR_2;

 while (!FUNC_0(VAR_1)) {
  VAR_2 = FUNC_1(VAR_1);
  FUNC_2(VAR_1, VAR_0);
  if (VAR_2->fmtoutput)
   FUNC_3(VAR_2->fmtoutput);
  if (VAR_2->matcheduser)
   FUNC_3(VAR_2->matcheduser);
  FUNC_3(VAR_2);
 }
}
