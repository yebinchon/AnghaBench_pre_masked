
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pbt; int len; } ;
struct TYPE_3__ {int version; int len; } ;
struct ipl_parameter_block {TYPE_2__ pb0_hdr; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct ipl_parameter_block *VAR_4)
{
 VAR_4->hdr.len = VAR_1;
 VAR_4->hdr.version = VAR_2;
 VAR_4->pb0_hdr.len = VAR_0;
 VAR_4->pb0_hdr.pbt = VAR_3;
}
