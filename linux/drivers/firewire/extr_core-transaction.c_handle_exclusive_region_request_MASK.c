
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_request {int length; int data; } ;
struct fw_packet {int generation; int * header; } ;
struct fw_card {int dummy; } ;
struct fw_address_handler {int callback_data; int (* address_callback ) (struct fw_card*,struct fw_request*,int,int,int,int ,unsigned long long,int ,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct fw_card*,struct fw_request*,int ) ;
 struct fw_address_handler* FUNC_5 (int *,unsigned long long,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct fw_card*,struct fw_request*,int,int,int,int ,unsigned long long,int ,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct fw_card *VAR_3,
         struct fw_packet *VAR_4,
         struct fw_request *VAR_5,
         unsigned long long VAR_6)
{
 struct fw_address_handler *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_4->header[0]);
 VAR_10 = FUNC_2(VAR_4->header[1]);
 VAR_8 = FUNC_3(VAR_4->header[0]);
 if (VAR_8 == VAR_1)
  VAR_8 = 0x10 + FUNC_1(VAR_4->header[3]);

 FUNC_6();
 VAR_7 = FUNC_5(&VAR_2,
         VAR_6, VAR_5->length);
 if (VAR_7)
  VAR_7->address_callback(VAR_3, VAR_5,
       VAR_8, VAR_9, VAR_10,
       VAR_4->generation, VAR_6,
       VAR_5->data, VAR_5->length,
       VAR_7->callback_data);
 FUNC_7();

 if (!VAR_7)
  FUNC_4(VAR_3, VAR_5, VAR_0);
}
