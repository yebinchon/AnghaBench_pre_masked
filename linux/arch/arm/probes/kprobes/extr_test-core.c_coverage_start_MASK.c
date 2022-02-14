
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union decode_item {int dummy; } decode_item ;
struct coverage_entry {int dummy; } ;
struct TYPE_3__ {scalar_t__ nesting; scalar_t__ num_entries; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (union decode_item const*,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(const union decode_item *VAR_4)
{
 VAR_2.base = FUNC_0(VAR_1,
          sizeof(struct coverage_entry),
          VAR_0);
 VAR_2.num_entries = 0;
 VAR_2.nesting = 0;
 return FUNC_1(VAR_4, VAR_3, &VAR_2);
}
