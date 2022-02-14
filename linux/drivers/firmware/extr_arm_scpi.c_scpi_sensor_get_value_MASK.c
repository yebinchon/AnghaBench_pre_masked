
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int value ;
typedef int u64 ;
typedef int u16 ;
typedef int id ;
typedef int __le64 ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_2__ {scalar_t__ is_legacy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int ,int *,int,int *,int) ;

__attribute__((used)) static int FUNC_4(u16 VAR_2, u64 *VAR_3)
{
 __le16 VAR_4 = FUNC_0(VAR_2);
 __le64 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_0, &VAR_4, sizeof(VAR_4),
    &VAR_5, sizeof(VAR_5));
 if (VAR_6)
  return VAR_6;

 if (VAR_1->is_legacy)

  *VAR_3 = FUNC_1((__le32 *)&VAR_5);
 else
  *VAR_3 = FUNC_2(VAR_5);

 return 0;
}
