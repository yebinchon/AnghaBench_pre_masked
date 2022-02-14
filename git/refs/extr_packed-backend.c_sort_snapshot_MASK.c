
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snapshot_record {char const* start; int len; } ;
struct snapshot {char* start; char* eof; char* buf; TYPE_1__* refs; } ;
struct TYPE_4__ {int hexsz; } ;
struct TYPE_3__ {int path; } ;


 int FUNC_0 (struct snapshot_record*,size_t,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct snapshot_record*,size_t,scalar_t__ (*) (struct snapshot_record*,struct snapshot_record*)) ;
 int FUNC_3 (struct snapshot*) ;
 scalar_t__ FUNC_4 (struct snapshot_record*,struct snapshot_record*) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (struct snapshot_record*) ;
 char* FUNC_7 (char const*,char,int) ;
 int FUNC_8 (char*,char const*,int) ;
 TYPE_2__* VAR_0 ;
 char* FUNC_9 (size_t) ;

__attribute__((used)) static void FUNC_10(struct snapshot *VAR_1)
{
 struct snapshot_record *VAR_2 = ((void*)0);
 size_t VAR_3 = 0, VAR_4 = 0;
 int VAR_5 = 1;
 const char *VAR_6, *VAR_7, *VAR_8;
 size_t VAR_9, VAR_10;
 char *VAR_11, *VAR_12;

 VAR_6 = VAR_1->start;
 VAR_7 = VAR_1->eof;

 if (VAR_6 == VAR_7)
  return;

 VAR_9 = VAR_7 - VAR_6;





 FUNC_0(VAR_2, VAR_9 / 80 + 20, VAR_3);

 while (VAR_6 < VAR_7) {
  VAR_8 = FUNC_7(VAR_6, '\n', VAR_7 - VAR_6);
  if (!VAR_8)

   FUNC_1("unterminated line found in packed-refs");
  if (VAR_8 - VAR_6 < VAR_0->hexsz + 2)
   FUNC_5(VAR_1->refs->path,
      VAR_6, VAR_7 - VAR_6);
  VAR_8++;
  if (VAR_8 < VAR_7 && *VAR_8 == '^') {




   const char *VAR_13 = VAR_8;

   VAR_8 = FUNC_7(VAR_13, '\n', VAR_7 - VAR_13);
   if (!VAR_8)

    FUNC_1("unterminated peeled line found in packed-refs");
   VAR_8++;
  }

  FUNC_0(VAR_2, VAR_4 + 1, VAR_3);
  VAR_2[VAR_4].start = VAR_6;
  VAR_2[VAR_4].len = VAR_8 - VAR_6;
  VAR_4++;

  if (VAR_5 &&
      VAR_4 > 1 &&
      FUNC_4(&VAR_2[VAR_4 - 2],
        &VAR_2[VAR_4 - 1]) >= 0)
   VAR_5 = 0;

  VAR_6 = VAR_8;
 }

 if (VAR_5)
  goto cleanup;


 FUNC_2(VAR_2, VAR_4, FUNC_4);






 VAR_11 = FUNC_9(VAR_9);
 for (VAR_12 = VAR_11, VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  FUNC_8(VAR_12, VAR_2[VAR_10].start, VAR_2[VAR_10].len);
  VAR_12 += VAR_2[VAR_10].len;
 }





 FUNC_3(VAR_1);
 VAR_1->buf = VAR_1->start = VAR_11;
 VAR_1->eof = VAR_11 + VAR_9;

cleanup:
 FUNC_6(VAR_2);
}
