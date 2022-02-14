
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct ether_header {int* ether_shost; int* ether_dhost; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_3(struct ether_header *VAR_0, uint8_t VAR_1)
{
 uint32_t VAR_2, VAR_3, VAR_4;

 VAR_2 = VAR_0->ether_shost[5] |
  (VAR_0->ether_shost[4] << 8) |
  (VAR_0->ether_shost[3] << 16) |
  (VAR_0->ether_shost[2] << 24);
 VAR_3 = VAR_0->ether_dhost[5] |
  (VAR_0->ether_dhost[4] << 8) |
  (VAR_0->ether_dhost[3] << 16) |
  (VAR_0->ether_dhost[2] << 24);

 VAR_4 = FUNC_2(FUNC_0(VAR_2),
    FUNC_0(VAR_3),
    FUNC_1(0xFFFD) + VAR_1,
    FUNC_1(0xFFFE) + VAR_1);

 return VAR_4;
}
