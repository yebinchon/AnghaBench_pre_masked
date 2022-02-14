
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 long long VAR_2 ;
 int FUNC_1 (int ,int const*,int const*) ;

__attribute__((used)) static void FUNC_2 (const sigset_t *VAR_3, const int VAR_4) {
  sigset_t VAR_5;
  int VAR_6 = FUNC_1 (VAR_0, VAR_3, &VAR_5);
  FUNC_0 (!VAR_6);
  VAR_2 &= ~(1LL << VAR_4);
  VAR_6 = FUNC_1 (VAR_1, &VAR_5, ((void*)0));
  FUNC_0 (!VAR_6);
}
