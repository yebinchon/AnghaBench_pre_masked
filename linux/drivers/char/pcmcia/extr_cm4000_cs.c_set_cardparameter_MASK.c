
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned char u_int8_t ;
struct cm4000_dev {int flags1; int baudv; int atr; TYPE_2__* p_dev; } ;
struct TYPE_7__ {unsigned char stopbits; int atr_len; int atr; } ;
struct TYPE_6__ {TYPE_1__** resource; } ;
struct TYPE_5__ {unsigned int start; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int,struct cm4000_dev*,char*,...) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 TYPE_3__* VAR_0 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (unsigned char,int ) ;

__attribute__((used)) static void FUNC_7(struct cm4000_dev *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3 = VAR_1->p_dev->resource[0]->start;
 u_int8_t VAR_4 = 0x02;

 FUNC_1(3, VAR_1, "-> set_cardparameter\n");

 VAR_1->flags1 = VAR_1->flags1 | (((VAR_1->baudv - 1) & 0x0100) >> 8);
 FUNC_6(VAR_1->flags1, FUNC_3(VAR_3));
 FUNC_1(5, VAR_1, "flags1 = 0x%02x\n", VAR_1->flags1);


 FUNC_6((unsigned char)((VAR_1->baudv - 1) & 0xFF), FUNC_2(VAR_3));

 FUNC_1(5, VAR_1, "baudv = %i -> write 0x%02x\n", VAR_1->baudv,
       ((VAR_1->baudv - 1) & 0xFF));


 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (!FUNC_5(VAR_1->atr, VAR_0[VAR_2].atr,
       VAR_0[VAR_2].atr_len))
   VAR_4 = VAR_0[VAR_2].stopbits;
 }
 FUNC_6(VAR_4, FUNC_4(VAR_3));

 FUNC_1(3, VAR_1, "<- set_cardparameter\n");
}
