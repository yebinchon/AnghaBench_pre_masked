
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ata_show_ering_arg {scalar_t__ written; scalar_t__ buf; } ;
struct ata_ering_entry {int err_mask; int timestamp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ata_ering_entry *VAR_2, void *VAR_3)
{
 struct ata_show_ering_arg* VAR_4 = VAR_3;
 u64 VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_0(VAR_2->timestamp, VAR_0, &VAR_6);
 VAR_4->written += FUNC_2(VAR_4->buf + VAR_4->written,
           "[%5llu.%09lu]", VAR_5,
    VAR_6 * VAR_1 / VAR_0);
 VAR_4->written += FUNC_1(VAR_2->err_mask,
       VAR_4->buf + VAR_4->written);
 return 0;
}
