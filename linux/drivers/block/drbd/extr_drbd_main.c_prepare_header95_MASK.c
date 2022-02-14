
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p_header95 {int length; void* command; void* magic; } ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static unsigned int FUNC_2(struct p_header95 *VAR_1, enum drbd_packet VAR_2, int VAR_3)
{
 VAR_1->magic = FUNC_0(VAR_0);
 VAR_1->command = FUNC_0(VAR_2);
 VAR_1->length = FUNC_1(VAR_3);
 return sizeof(struct p_header95);
}
