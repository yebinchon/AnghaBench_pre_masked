
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_hid_data {int request_done; size_t raw_buf_size; int raw_get_req; int * raw_buf; } ;
struct hostif_msg {int dummy; } ;
struct hid_device {struct ishtp_hid_data* driver_data; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;


 int FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,unsigned char,unsigned char) ;
 int FUNC_2 (struct hid_device*,char*,size_t,unsigned char) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t,int ) ;
 int FUNC_5 (int ,int *,size_t) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_4, unsigned char VAR_5,
        __u8 *VAR_6, size_t VAR_7, unsigned char VAR_8,
        int VAR_9)
{
 struct ishtp_hid_data *VAR_10 = VAR_4->driver_data;
 char *VAR_11 = ((void*)0);
 size_t VAR_12;
 unsigned int VAR_13 = sizeof(struct hostif_msg);

 if (VAR_8 == VAR_3)
  return -VAR_0;

 VAR_10->request_done = 0;
 switch (VAR_9) {
 case 129:
  VAR_10->raw_buf = VAR_6;
  VAR_10->raw_buf_size = VAR_7;
  VAR_10->raw_get_req = 1;

  FUNC_1(VAR_4, VAR_5, VAR_8);
  break;
 case 128:




  VAR_12 = VAR_7 + VAR_13;
  VAR_11 = FUNC_4(VAR_12 + 7, VAR_2);
  if (!VAR_11)
   return -VAR_1;

  FUNC_5(VAR_11 + VAR_13, VAR_6, VAR_7);
  FUNC_2(VAR_4, VAR_11, VAR_12, VAR_5);
  FUNC_3(VAR_11);
  break;
 }

 FUNC_0(VAR_4);

 return VAR_7;
}
