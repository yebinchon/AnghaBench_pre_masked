
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {void* TypeSignature; void* OSSignature; int Signature; } ;
typedef TYPE_1__ uiControl ;


 scalar_t__ FUNC_0 (size_t,char const*) ;
 int VAR_0 ;

uiControl *FUNC_1(size_t VAR_1, uint32_t VAR_2, uint32_t VAR_3, const char *VAR_4)
{
 uiControl *VAR_5;

 VAR_5 = (uiControl *) FUNC_0(VAR_1, VAR_4);
 VAR_5->Signature = VAR_0;
 VAR_5->OSSignature = VAR_2;
 VAR_5->TypeSignature = VAR_3;
 return VAR_5;
}
