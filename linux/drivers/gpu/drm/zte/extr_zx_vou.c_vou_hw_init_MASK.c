
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_vou_hw {scalar_t__ osd; scalar_t__ otfppu; scalar_t__ timing; scalar_t__ vouctl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct zx_vou_hw*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct zx_vou_hw *VAR_11)
{

 FUNC_1(VAR_11->vouctl + VAR_10, ~0);


 FUNC_1(VAR_11->vouctl + VAR_9, ~0);


 FUNC_1(VAR_11->osd + VAR_0, ~0);
 FUNC_1(VAR_11->timing + VAR_8, ~0);


 FUNC_1(VAR_11->osd + VAR_2, VAR_1);
 FUNC_1(VAR_11->timing + VAR_6, VAR_7);


 FUNC_1(VAR_11->otfppu + VAR_4, 0x2a);





 FUNC_2(VAR_11->osd + VAR_3, VAR_5, VAR_5);

 FUNC_0(VAR_11);
}
