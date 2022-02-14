
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p_header100 {scalar_t__ pad; void* length; void* command; void* volume; void* magic; } ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static unsigned int FUNC_2(struct p_header100 *VAR_1, enum drbd_packet VAR_2,
          int VAR_3, int VAR_4)
{
 VAR_1->magic = FUNC_1(VAR_0);
 VAR_1->volume = FUNC_0(VAR_4);
 VAR_1->command = FUNC_0(VAR_2);
 VAR_1->length = FUNC_1(VAR_3);
 VAR_1->pad = 0;
 return sizeof(struct p_header100);
}
