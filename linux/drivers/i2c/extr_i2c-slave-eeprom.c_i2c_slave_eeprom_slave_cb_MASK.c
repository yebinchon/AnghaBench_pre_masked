
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct eeprom_data {int buffer_idx; int* buffer; size_t address_mask; int idx_write_cnt; int buffer_lock; int read_only; int num_address_bytes; } ;
typedef enum i2c_slave_event { ____Placeholder_i2c_slave_event } i2c_slave_event ;







 struct eeprom_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0,
         enum i2c_slave_event VAR_1, u8 *VAR_2)
{
 struct eeprom_data *VAR_3 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 129:
  if (VAR_3->idx_write_cnt < VAR_3->num_address_bytes) {
   if (VAR_3->idx_write_cnt == 0)
    VAR_3->buffer_idx = 0;
   VAR_3->buffer_idx = *VAR_2 | (VAR_3->buffer_idx << 8);
   VAR_3->idx_write_cnt++;
  } else {
   if (!VAR_3->read_only) {
    FUNC_1(&VAR_3->buffer_lock);
    VAR_3->buffer[VAR_3->buffer_idx++ & VAR_3->address_mask] = *VAR_2;
    FUNC_2(&VAR_3->buffer_lock);
   }
  }
  break;

 case 132:

  VAR_3->buffer_idx++;

 case 131:
  FUNC_1(&VAR_3->buffer_lock);
  *VAR_2 = VAR_3->buffer[VAR_3->buffer_idx & VAR_3->address_mask];
  FUNC_2(&VAR_3->buffer_lock);





  break;

 case 130:
 case 128:
  VAR_3->idx_write_cnt = 0;
  break;

 default:
  break;
 }

 return 0;
}
