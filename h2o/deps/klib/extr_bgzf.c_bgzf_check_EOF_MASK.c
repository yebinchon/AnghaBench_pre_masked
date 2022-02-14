
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
typedef int off_t ;
typedef int _bgzf_file_t ;
struct TYPE_3__ {scalar_t__ fp; } ;
typedef TYPE_1__ BGZF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

int FUNC_4(BGZF *VAR_2)
{
 static uint8_t VAR_3[28] = "\037\213\010\4\0\0\0\0\0\377\6\0\102\103\2\0\033\0\3\0\0\0\0\0\0\0\0\0";
 uint8_t VAR_4[28];
 off_t VAR_5;
 VAR_5 = FUNC_2((_bgzf_file_t)VAR_2->fp);
 if (FUNC_1(VAR_2->fp, -28, VAR_0) < 0) return 0;
 FUNC_0(VAR_2->fp, VAR_4, 28);
 FUNC_1(VAR_2->fp, VAR_5, VAR_1);
 return (FUNC_3(VAR_3, VAR_4, 28) == 0)? 1 : 0;
}
