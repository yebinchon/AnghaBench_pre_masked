
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int version; } ;
struct TYPE_6__ {TYPE_1__ payload; } ;
typedef TYPE_2__ loader_block ;
typedef int amb_dev ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int const*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(loader_block *VAR_3, const amb_dev *VAR_4,
         u32 *VAR_5)
{
  int VAR_6;

  FUNC_0 (VAR_0|VAR_1, "get_loader_version");

  VAR_6 = FUNC_2 (VAR_3, VAR_4, VAR_2);
  if (VAR_6)
    return VAR_6;
  if (VAR_5)
    *VAR_5 = FUNC_1 (VAR_3->payload.version);
  return 0;
}
