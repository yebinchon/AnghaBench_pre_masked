
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int message ;


 int FUNC_0 (int,char const*,int) ;
 long long VAR_0 ;
 int FUNC_1 (int const,void (*) (int const)) ;

__attribute__((used)) static void FUNC_2 (const int VAR_1) {
  const char VAR_2[] = "got SIGHUP.\n";
  FUNC_0 (2, VAR_2, sizeof (VAR_2) - (size_t)1);

  VAR_0 |= (1ll << VAR_1);
  FUNC_1 (VAR_1, FUNC_2);
}
