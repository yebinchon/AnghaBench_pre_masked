
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
struct bitmapped_commit {int bitmap; } ;
struct bitmap {int dummy; } ;
typedef scalar_t__ khiter_t ;
struct TYPE_4__ {int bitmaps; } ;


 scalar_t__ FUNC_0 (struct bitmap*,int ) ;
 int FUNC_1 (struct bitmap*,int ) ;
 int FUNC_2 (struct bitmap*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 struct bitmapped_commit* FUNC_6 (int ,scalar_t__) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int
FUNC_7(struct bitmap *VAR_1, struct commit *VAR_2)
{
 khiter_t VAR_3;
 uint32_t VAR_4 = FUNC_3(&VAR_2->object.oid);

 if (FUNC_0(VAR_1, VAR_4))
  return 0;

 VAR_3 = FUNC_5(VAR_0.bitmaps, VAR_2->object.oid);
 if (VAR_3 < FUNC_4(VAR_0.bitmaps)) {
  struct bitmapped_commit *VAR_5 = FUNC_6(VAR_0.bitmaps, VAR_3);
  FUNC_1(VAR_1, VAR_5->bitmap);
  return 0;
 }

 FUNC_2(VAR_1, VAR_4);
 return 1;
}
