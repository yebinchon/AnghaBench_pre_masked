
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_i2c_request {int subaddr_sz; int subaddr; void* buffer_ra; void* size; void* addr; int type; } ;
struct i2c_msg {int flags; int len; int* buf; int addr; } ;
struct i2c_adapter {scalar_t__ algo_data; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,struct opal_i2c_request*) ;
 int FUNC_5 (struct opal_i2c_request*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_5, struct i2c_msg *VAR_6,
    int VAR_7)
{
 unsigned long VAR_8 = (unsigned long)VAR_5->algo_data;
 struct opal_i2c_request VAR_9;
 int VAR_10, VAR_11;




 FUNC_5(&VAR_9, 0, sizeof(VAR_9));
 switch(VAR_7) {
 case 1:
  VAR_9.type = (VAR_6[0].flags & VAR_0) ?
   VAR_1 : VAR_2;
  VAR_9.addr = FUNC_1(VAR_6[0].addr);
  VAR_9.size = FUNC_2(VAR_6[0].len);
  VAR_9.buffer_ra = FUNC_3(FUNC_0(VAR_6[0].buf));
  break;
 case 2:
  VAR_9.type = (VAR_6[1].flags & VAR_0) ?
   VAR_3 : VAR_4;
  VAR_9.addr = FUNC_1(VAR_6[0].addr);
  VAR_9.subaddr_sz = VAR_6[0].len;
  for (VAR_11 = 0; VAR_11 < VAR_6[0].len; VAR_11++)
   VAR_9.subaddr = (VAR_9.subaddr << 8) | VAR_6[0].buf[VAR_11];
  VAR_9.subaddr = FUNC_2(VAR_9.subaddr);
  VAR_9.size = FUNC_2(VAR_6[1].len);
  VAR_9.buffer_ra = FUNC_3(FUNC_0(VAR_6[1].buf));
  break;
 }

 VAR_10 = FUNC_4(VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;

 return VAR_7;
}
