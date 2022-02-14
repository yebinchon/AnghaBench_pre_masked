
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max30100_data {int buffer; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int *) ;

__attribute__((used)) static int FUNC_1(struct max30100_data *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->client,
         VAR_0,
         VAR_1,
         (u8 *) &VAR_2->buffer);

 return (VAR_3 == VAR_1) ? 0 : VAR_3;
}
