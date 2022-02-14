
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
struct ad7303_state {unsigned int config; int data; int spi; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct ad7303_state *VAR_2, unsigned int VAR_3,
 uint8_t VAR_4)
{
 VAR_2->data = FUNC_0(VAR_1 |
  (VAR_3 << VAR_0) |
  VAR_2->config | VAR_4);

 return FUNC_1(VAR_2->spi, &VAR_2->data, sizeof(VAR_2->data));
}
