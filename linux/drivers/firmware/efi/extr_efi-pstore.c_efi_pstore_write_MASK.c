
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tv_sec; } ;
struct pstore_record {int part; int count; int type; scalar_t__ reason; TYPE_2__* psi; int size; scalar_t__ compressed; TYPE_1__ time; int id; } ;
typedef int name ;
typedef int efi_guid_t ;
typedef char efi_char16_t ;
struct TYPE_4__ {int buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int,char*,int,int,int,long long,char) ;

__attribute__((used)) static int FUNC_6(struct pstore_record *VAR_4)
{
 char VAR_5[VAR_0];
 efi_char16_t VAR_6[VAR_0];
 efi_guid_t VAR_7 = VAR_2;
 int VAR_8, VAR_9 = 0;

 VAR_4->id = FUNC_2(VAR_4->time.tv_sec, VAR_4->part,
    VAR_4->count);


 FUNC_3(VAR_5, 0, sizeof(VAR_5));

 FUNC_5(VAR_5, sizeof(VAR_5), "dump-type%u-%u-%d-%lld-%c",
   VAR_4->type, VAR_4->part, VAR_4->count,
   (long long)VAR_4->time.tv_sec,
   VAR_4->compressed ? 'C' : 'D');

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_6[VAR_8] = VAR_5[VAR_8];

 VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_3,
         FUNC_4(), VAR_4->size, VAR_4->psi->buf);

 if (VAR_4->reason == VAR_1)
  FUNC_1();

 return VAR_9;
}
