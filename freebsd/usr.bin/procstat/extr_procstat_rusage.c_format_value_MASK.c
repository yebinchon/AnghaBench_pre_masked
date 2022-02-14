
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (char*,int,long,char*,int,int ) ;
 int FUNC_1 (char*,int,char*,long) ;

__attribute__((used)) static const char *
FUNC_2(long VAR_1, bool VAR_2, int VAR_3)
{
 static char VAR_4[14];

 if (VAR_3 != 0)
  VAR_1 <<= VAR_3 * 10;
 if (VAR_2)
  FUNC_0(VAR_4, sizeof(VAR_4), VAR_1, "B",
      VAR_3, VAR_0);
 else
  FUNC_1(VAR_4, sizeof(VAR_4), "%ld   ", VAR_1);
 return (VAR_4);
}
