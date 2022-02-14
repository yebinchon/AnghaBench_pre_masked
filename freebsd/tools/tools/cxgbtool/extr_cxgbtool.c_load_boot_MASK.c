
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ch_mem_range {int len; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,int ,struct ch_mem_range*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (int,int ,int) ;

__attribute__((used)) static int
FUNC_7(int VAR_3, char *VAR_4[], int VAR_5, const char *VAR_6)
{
 int VAR_7, VAR_8;
 struct ch_mem_range VAR_9;
 const char *VAR_10 = VAR_4[VAR_5];

 if (VAR_3 != VAR_5 + 1) return -1;

 VAR_7 = FUNC_5(VAR_10, VAR_2);
 if (VAR_7 < 0)
  FUNC_2(1, "load boot image");

 VAR_9.buf = FUNC_4(VAR_1 + 1);
 if (!VAR_9.buf)
  FUNC_2(1, "load boot image");

 VAR_8 = FUNC_6(VAR_7, VAR_9.buf, VAR_1 + 1);
 if (VAR_8 < 0)
  FUNC_2(1, "load boot image");
  if (VAR_8 > VAR_1)
  FUNC_3(1, "boot image too large");

 VAR_9.len = VAR_8;

 if (FUNC_1(VAR_6, VAR_0, &VAR_9) < 0)
  FUNC_2(1, "load boot image");

 FUNC_0(VAR_7);
 return 0;
}
