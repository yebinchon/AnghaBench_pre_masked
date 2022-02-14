
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct signature_check {char* gpg_status; char result; void* key; void* signer; void* fingerprint; void* primary_key_fingerprint; } ;
struct TYPE_3__ {char* check; int flags; char result; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (void*) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_3 (char const*,char*,char const**) ;
 char* FUNC_4 (char const*,char) ;
 void* FUNC_5 (char const*,int) ;

__attribute__((used)) static void FUNC_6(struct signature_check *VAR_5)
{
 const char *VAR_6 = VAR_5->gpg_status;
 const char *VAR_7, *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11 = 0;


 for (VAR_7 = VAR_6; *VAR_7; VAR_7 = FUNC_4(VAR_7+1, '\n')) {
  while (*VAR_7 == '\n')
   VAR_7++;
  if (!*VAR_7)
   break;


  if (!FUNC_3(VAR_7, "[GNUPG:] ", &VAR_7))
   continue;


  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
   if (FUNC_3(VAR_7, VAR_4[VAR_9].check, &VAR_7)) {
    if (VAR_4[VAR_9].flags & VAR_0) {
     if (VAR_11++)
      goto found_duplicate_status;
    }

    if (VAR_4[VAR_9].result)
     VAR_5->result = VAR_4[VAR_9].result;

    if (VAR_4[VAR_9].flags & VAR_2) {
     VAR_8 = FUNC_4(VAR_7, ' ');
     FUNC_2(VAR_5->key);
     VAR_5->key = FUNC_5(VAR_7, VAR_8 - VAR_7);

     if (*VAR_8 && (VAR_4[VAR_9].flags & VAR_3)) {
      VAR_7 = VAR_8 + 1;
      VAR_8 = FUNC_4(VAR_7, '\n');
      FUNC_2(VAR_5->signer);
      VAR_5->signer = FUNC_5(VAR_7, VAR_8 - VAR_7);
     }
    }

    if (VAR_4[VAR_9].flags & VAR_1) {
     VAR_8 = FUNC_4(VAR_7, ' ');
     FUNC_2(VAR_5->fingerprint);
     VAR_5->fingerprint = FUNC_5(VAR_7, VAR_8 - VAR_7);


     for (VAR_10 = 9; VAR_10 > 0; VAR_10--) {
      if (!*VAR_8)
       break;
      VAR_7 = VAR_8 + 1;
      VAR_8 = FUNC_4(VAR_7, ' ');
     }

     VAR_8 = FUNC_4(VAR_7, '\n');
     FUNC_2(VAR_5->primary_key_fingerprint);
     VAR_5->primary_key_fingerprint = FUNC_5(VAR_7, VAR_8 - VAR_7);
    }

    break;
   }
  }
 }
 return;

found_duplicate_status:







 VAR_5->result = 'E';

 FUNC_1(VAR_5->primary_key_fingerprint);
 FUNC_1(VAR_5->fingerprint);
 FUNC_1(VAR_5->signer);
 FUNC_1(VAR_5->key);
}
