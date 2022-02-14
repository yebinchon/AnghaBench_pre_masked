
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct group {int dummy; } ;
struct TYPE_2__ {int etcpath; } ;


 struct group* FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct group*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,struct group*,struct group*) ;
 struct group* FUNC_6 (struct group*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;

__attribute__((used)) static int
FUNC_12(struct group * VAR_1, char const * VAR_2)
{
 int VAR_3, VAR_4;
 struct group *VAR_5 = ((void*)0);
 struct group *VAR_6 = ((void*)0);

 if (VAR_1 != ((void*)0))
  VAR_5 = FUNC_6(VAR_1);

 if (VAR_2 != ((void*)0))
  VAR_6 = FUNC_0(VAR_2);

 if (FUNC_8(VAR_0.etcpath, ((void*)0)))
  FUNC_2(1, "gr_init()");

 if ((VAR_3 = FUNC_9()) == -1) {
  FUNC_7();
  FUNC_2(1, "gr_lock()");
 }
 if ((VAR_4 = FUNC_11(-1)) == -1) {
  FUNC_7();
  FUNC_2(1, "gr_tmp()");
 }
 if (FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6) == -1) {
  FUNC_7();
  FUNC_1(VAR_4);
  FUNC_2(1, "gr_copy()");
 }
 FUNC_4(VAR_4);
 FUNC_1(VAR_4);
 if (FUNC_10() == -1) {
  FUNC_7();
  FUNC_2(1, "gr_mkdb()");
 }
 FUNC_3(VAR_5);
 FUNC_7();
 return 0;
}
