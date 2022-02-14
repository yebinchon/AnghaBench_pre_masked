
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int object_zlib_level; scalar_t__ fsync_object_files; } ;
typedef TYPE_1__ loose_backend ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(loose_backend *VAR_4)
{
 int VAR_5 = VAR_2 |
  (VAR_4->object_zlib_level << VAR_0);

 if (VAR_4->fsync_object_files || VAR_3)
  VAR_5 |= VAR_1;

 return VAR_5;
}
