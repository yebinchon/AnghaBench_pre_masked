
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jobspec {int startnum; int endrange; int * matcheduser; int * wanteduser; int matchcnt; int * wantedhost; } ;
struct jobqueue {char* job_cfname; int job_matched; } ;
struct cjobinfo {char const* cji_acctuser; } ;


 int FUNC_0 (char*,char const**) ;
 int FUNC_1 (struct cjobinfo*) ;
 struct cjobinfo* FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int *,char const*,int ) ;
 int FUNC_4 (char*,...) ;
 int * FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(struct jobqueue *VAR_0, struct jobspec *VAR_1)
{
 struct cjobinfo *VAR_2;
 const char *VAR_3;
 int VAR_4, VAR_5;





 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
  return (0);





 if (VAR_0->job_matched)
  return (0);

 VAR_4 = FUNC_0(VAR_0->job_cfname, &VAR_3);
 VAR_2 = ((void*)0);
 VAR_5 = 0;
 VAR_1->matcheduser = ((void*)0);




 if (VAR_1->startnum >= 0) {
  if (VAR_4 < VAR_1->startnum)
   goto nomatch;
  if (VAR_4 > VAR_1->endrange)
   goto nomatch;
 }
 if (VAR_1->wantedhost != ((void*)0)) {
  if (FUNC_3(VAR_1->wantedhost, VAR_3, 0) != 0)
   goto nomatch;
 }





 if (VAR_1->wanteduser != ((void*)0)) {
  VAR_2 = FUNC_2("fakeq", VAR_0->job_cfname);
  if (VAR_2 == ((void*)0))
   goto nomatch;
  if (FUNC_3(VAR_1->wanteduser, VAR_2->cji_acctuser, 0) != 0)
   goto nomatch;
 }


 VAR_5 = 1;
 VAR_0->job_matched = 1;
 VAR_1->matchcnt++;
 if (VAR_1->wanteduser != ((void*)0)) {





  VAR_1->matcheduser = FUNC_5(VAR_2->cji_acctuser);
 }




nomatch:
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2);
 return (VAR_5);
}
