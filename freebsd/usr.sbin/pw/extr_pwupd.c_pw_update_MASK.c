
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct passwd {int * pw_name; } ;
struct TYPE_2__ {int etcpath; } ;


 struct passwd* FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct passwd*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,struct passwd*,struct passwd*) ;
 struct passwd* FUNC_6 (struct passwd*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;

__attribute__((used)) static int
FUNC_13(struct passwd * VAR_1, char const * VAR_2)
{
 struct passwd *VAR_3 = ((void*)0);
 struct passwd *VAR_4 = ((void*)0);
 int VAR_5, VAR_6, VAR_7;

 if ((VAR_5 = FUNC_12()) != 0)
  return (VAR_5);

 if (VAR_1 != ((void*)0))
  VAR_3 = FUNC_6(VAR_1);

 if (VAR_2 != ((void*)0))
  VAR_4 = FUNC_0(VAR_2);

 if (FUNC_8(VAR_0.etcpath, ((void*)0)))
  FUNC_2(1, "pw_init()");
 if ((VAR_6 = FUNC_9()) == -1) {
  FUNC_7();
  FUNC_2(1, "pw_lock()");
 }
 if ((VAR_7 = FUNC_11(-1)) == -1) {
  FUNC_7();
  FUNC_2(1, "pw_tmp()");
 }
 if (FUNC_5(VAR_6, VAR_7, VAR_3, VAR_4) == -1) {
  FUNC_7();
  FUNC_1(VAR_7);
  FUNC_2(1, "pw_copy()");
 }
 FUNC_4(VAR_7);
 FUNC_1(VAR_7);




 if (FUNC_10(VAR_3 != ((void*)0) ? VAR_3->pw_name : ((void*)0)) == -1) {
  FUNC_7();
  FUNC_2(1, "pw_mkdb()");
 }
 FUNC_3(VAR_3);
 FUNC_7();

 return (0);
}
