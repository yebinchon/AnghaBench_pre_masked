
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isns_req {int ir_usedlen; scalar_t__ ir_buf; } ;
struct isns_hdr {int ih_sequence; int ih_transaction; int ih_flags; int ih_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,scalar_t__,int) ;

int
FUNC_3(int VAR_2, struct isns_req *VAR_3)
{
 struct isns_hdr *VAR_4;
 int VAR_5;

 VAR_4 = (struct isns_hdr *)VAR_3->ir_buf;
 FUNC_1(VAR_4->ih_length, VAR_3->ir_usedlen - sizeof(*VAR_4));
 FUNC_1(VAR_4->ih_flags, FUNC_0(VAR_4->ih_flags) |
     VAR_1 | VAR_0);
 FUNC_1(VAR_4->ih_transaction, 0);
 FUNC_1(VAR_4->ih_sequence, 0);

 VAR_5 = FUNC_2(VAR_2, VAR_3->ir_buf, VAR_3->ir_usedlen);
 return ((VAR_5 < 0) ? -1 : 0);
}
