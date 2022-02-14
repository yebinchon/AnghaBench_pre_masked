
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union mfi_evt {int word; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct mfi_evt_list {int dummy; } ;
struct mfi_evt_detail {int dummy; } ;
typedef int mbox ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct mfi_evt_list*,size_t,int *,int,int *) ;

__attribute__((used)) static int
FUNC_1(int VAR_1, struct mfi_evt_list *VAR_2, int VAR_3,
    union mfi_evt VAR_4, uint32_t VAR_5, uint8_t *VAR_6)
{
 uint32_t VAR_7[2];
 size_t VAR_8;

 VAR_7[0] = VAR_5;
 VAR_7[1] = VAR_4.word;
 VAR_8 = sizeof(struct mfi_evt_list) + sizeof(struct mfi_evt_detail) *
     (VAR_3 - 1);
 return (FUNC_0(VAR_1, VAR_0, VAR_2, VAR_8,
     (uint8_t *)&VAR_7, sizeof(VAR_7), VAR_6));
}
