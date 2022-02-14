
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fingerprint {int dummy; } ;


 int FUNC_0 (struct fingerprint*,char const*,char const*) ;

__attribute__((used)) static void FUNC_1(struct fingerprint *VAR_0,
      const char *VAR_1, const int *VAR_2,
      long VAR_3, long VAR_4)
{
 int VAR_5;
 const char *VAR_6, *VAR_7;

 VAR_2 += VAR_3;
 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
  VAR_6 = VAR_1 + VAR_2[VAR_5];
  VAR_7 = VAR_1 + VAR_2[VAR_5 + 1];
  FUNC_0(VAR_0 + VAR_5, VAR_6, VAR_7);
 }
}
