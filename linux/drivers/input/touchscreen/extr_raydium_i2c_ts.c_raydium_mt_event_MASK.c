
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct raydium_data {int report_size; int contact_size; int* report_data; int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct raydium_data *VAR_12)
{
 int VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_12->report_size / VAR_12->contact_size; VAR_13++) {
  u8 *VAR_14 = &VAR_12->report_data[VAR_12->contact_size * VAR_13];
  bool VAR_15 = VAR_14[VAR_7];
  u8 VAR_16, VAR_17;

  FUNC_2(VAR_12->input, VAR_13);
  FUNC_1(VAR_12->input, VAR_5, VAR_15);

  if (!VAR_15)
   continue;

  FUNC_4(VAR_12->input, VAR_0,
    FUNC_0(&VAR_14[VAR_10]));
  FUNC_4(VAR_12->input, VAR_1,
    FUNC_0(&VAR_14[VAR_11]));
  FUNC_4(VAR_12->input, VAR_2,
    VAR_14[VAR_6]);

  VAR_16 = VAR_14[VAR_8];
  VAR_17 = VAR_14[VAR_9];

  FUNC_4(VAR_12->input, VAR_3, FUNC_6(VAR_16, VAR_17));
  FUNC_4(VAR_12->input, VAR_4, FUNC_7(VAR_16, VAR_17));
 }

 FUNC_3(VAR_12->input);
 FUNC_5(VAR_12->input);
}
