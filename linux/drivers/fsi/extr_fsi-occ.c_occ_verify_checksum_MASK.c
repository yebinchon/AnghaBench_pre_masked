
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct occ_response {size_t* data; size_t seq_no; size_t cmd_type; size_t return_status; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t*) ;

__attribute__((used)) static int FUNC_1(struct occ_response *VAR_1, u16 VAR_2)
{

 u16 VAR_3 = FUNC_0(&VAR_1->data[VAR_2]);
 u16 VAR_4;
 u16 VAR_5;

 VAR_4 = VAR_1->seq_no;
 VAR_4 += VAR_1->cmd_type;
 VAR_4 += VAR_1->return_status;
 VAR_4 += (VAR_2 >> 8) + (VAR_2 & 0xFF);

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5)
  VAR_4 += VAR_1->data[VAR_5];

 if (VAR_4 != VAR_3)
  return -VAR_0;

 return 0;
}
