
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int oid; } ;
struct object_entry {TYPE_1__ idx; } ;
typedef int output ;
struct TYPE_6__ {char const* buf; } ;
struct TYPE_5__ {scalar_t__ hexsz; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (char*,char const*) ;
 struct object_entry* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_5 (char*,int,char*,int ) ;

__attribute__((used)) static void FUNC_6(const char *VAR_3)
{
 struct object_entry *VAR_4;
 char VAR_5[VAR_0 + 2];


 if (*VAR_3 != ':')
  FUNC_1("Not a mark: %s", VAR_3);

 VAR_4 = FUNC_2(FUNC_4(VAR_3));
 if (!VAR_4)
  FUNC_1("Unknown mark: %s", VAR_1.buf);

 FUNC_5(VAR_5, sizeof(VAR_5), "%s\n", FUNC_3(&VAR_4->idx.oid));
 FUNC_0(VAR_5, VAR_2->hexsz + 1);
}
