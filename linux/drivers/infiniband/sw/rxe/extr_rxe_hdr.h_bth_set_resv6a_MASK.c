
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_pkt_info {scalar_t__ offset; scalar_t__ hdr; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct rxe_pkt_info *VAR_0)
{
 FUNC_0(VAR_0->hdr + VAR_0->offset);
}
