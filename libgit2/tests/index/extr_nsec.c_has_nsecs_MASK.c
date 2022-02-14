
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nanoseconds; } ;
struct TYPE_5__ {scalar_t__ nanoseconds; } ;
struct TYPE_7__ {TYPE_2__ mtime; TYPE_1__ ctime; } ;
typedef TYPE_3__ git_index_entry ;


 size_t FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ,size_t) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_2(void)
{
 const git_index_entry *VAR_1;
 size_t VAR_2;
 bool VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_1 = FUNC_1(VAR_0, VAR_2);

  if (VAR_1->ctime.nanoseconds || VAR_1->mtime.nanoseconds) {
   VAR_3 = 1;
   break;
  }
 }

 return VAR_3;
}
