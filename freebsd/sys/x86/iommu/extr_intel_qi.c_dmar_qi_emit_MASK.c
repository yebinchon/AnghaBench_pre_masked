
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
struct dmar_unit {int inv_queue_tail; int inv_queue_size; scalar_t__ inv_queue; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void
FUNC_2(struct dmar_unit *VAR_1, uint64_t VAR_2, uint64_t VAR_3)
{

 FUNC_0(VAR_1);
 *(volatile uint64_t *)(VAR_1->inv_queue + VAR_1->inv_queue_tail) = VAR_2;
 VAR_1->inv_queue_tail += VAR_0 / 2;
 FUNC_1(VAR_1->inv_queue_tail <= VAR_1->inv_queue_size,
     ("tail overflow 0x%x 0x%jx", VAR_1->inv_queue_tail,
     (uintmax_t)VAR_1->inv_queue_size));
 VAR_1->inv_queue_tail &= VAR_1->inv_queue_size - 1;
 *(volatile uint64_t *)(VAR_1->inv_queue + VAR_1->inv_queue_tail) = VAR_3;
 VAR_1->inv_queue_tail += VAR_0 / 2;
 FUNC_1(VAR_1->inv_queue_tail <= VAR_1->inv_queue_size,
     ("tail overflow 0x%x 0x%jx", VAR_1->inv_queue_tail,
     (uintmax_t)VAR_1->inv_queue_size));
 VAR_1->inv_queue_tail &= VAR_1->inv_queue_size - 1;
}
