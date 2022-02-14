
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_packet {int numpkt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_packet*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(struct hfi1_packet *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_1;

 if (FUNC_1((VAR_2->numpkt & (VAR_0 - 1)) == 0))
  VAR_4 = FUNC_0(VAR_2, VAR_3);
 return VAR_4;
}
