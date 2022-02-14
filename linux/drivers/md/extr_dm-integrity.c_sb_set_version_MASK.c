
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_integrity_c {char mode; TYPE_1__* sb; scalar_t__ meta_dev; } ;
struct TYPE_2__ {int flags; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct dm_integrity_c *VAR_5)
{
 if (VAR_5->mode == 'B' || VAR_5->sb->flags & FUNC_0(VAR_0))
  VAR_5->sb->version = VAR_4;
 else if (VAR_5->meta_dev || VAR_5->sb->flags & FUNC_0(VAR_1))
  VAR_5->sb->version = VAR_3;
 else
  VAR_5->sb->version = VAR_2;
}
