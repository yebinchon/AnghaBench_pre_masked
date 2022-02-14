
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct isert_conn {struct iscsi_conn* conn; } ;
struct isert_cmd {int dummy; } ;
struct iser_rx_desc {int * data; } ;
struct iscsi_text {int dlength; } ;
struct iscsi_conn {int dummy; } ;
struct iscsi_cmd {unsigned char* text_in_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_text*) ;
 int FUNC_1 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_text*) ;
 unsigned char* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (unsigned char*,int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct isert_conn *VAR_2, struct isert_cmd *VAR_3,
        struct iscsi_cmd *VAR_4, struct iser_rx_desc *VAR_5,
        struct iscsi_text *VAR_6)
{
 struct iscsi_conn *VAR_7 = VAR_2->conn;
 u32 VAR_8 = FUNC_4(VAR_6->dlength);
 int VAR_9;
 unsigned char *VAR_10 = ((void*)0);

 VAR_9 = FUNC_1(VAR_7, VAR_4, VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8) {
  VAR_10 = FUNC_2(VAR_8, VAR_1);
  if (!VAR_10)
   return -VAR_0;
 }
 VAR_4->text_in_ptr = VAR_10;

 FUNC_3(VAR_4->text_in_ptr, &VAR_5->data[0], VAR_8);

 return FUNC_0(VAR_7, VAR_4, VAR_6);
}
