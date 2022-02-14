
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct object_id {int dummy; } ;
typedef scalar_t__ (* strbuf_getline_fn ) (struct strbuf*,int ) ;
struct TYPE_2__ {int hexsz; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,struct object_id*,char*,int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (char*,struct object_id*) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (struct strbuf*,int ) ;
 scalar_t__ FUNC_6 (struct strbuf*,int ) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct strbuf*) ;
 char* FUNC_9 (char*,char) ;
 unsigned long FUNC_10 (char*,char**,int) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_11 (struct strbuf*,char*,int *) ;
 int FUNC_12 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_13(int VAR_6)
{
 const int VAR_7 = VAR_5->hexsz;
 struct strbuf VAR_8 = VAR_1;
 struct strbuf VAR_9 = VAR_1;
 strbuf_getline_fn VAR_10;

 VAR_10 = VAR_6 ? FUNC_6 : FUNC_5;
 while (VAR_10(&VAR_8, VAR_4) != VAR_0) {
  char *VAR_11, *VAR_12;
  char *VAR_13;
  struct object_id VAR_14;
  unsigned int VAR_15;
  unsigned long VAR_16;
  int VAR_17;
  VAR_2 = 0;
  VAR_16 = FUNC_10(VAR_8.buf, &VAR_11, 8);
  if (VAR_11 == VAR_8.buf || *VAR_11 != ' '
      || VAR_2 || (unsigned int) VAR_16 != VAR_16)
   goto bad_line;
  VAR_15 = VAR_16;

  VAR_12 = FUNC_9(VAR_11, '\t');
  if (!VAR_12 || VAR_12 - VAR_11 < VAR_7 + 1)
   goto bad_line;

  if (VAR_12[-2] == ' ' && '0' <= VAR_12[-1] && VAR_12[-1] <= '3') {
   VAR_17 = VAR_12[-1] - '0';
   VAR_11 = VAR_12 + 1;
   VAR_12 = VAR_12 - 2;
  }
  else {
   VAR_17 = 0;
   VAR_11 = VAR_12 + 1;
  }

  if (FUNC_3(VAR_12 - VAR_7, &VAR_14) ||
   VAR_12[-(VAR_7 + 1)] != ' ')
   goto bad_line;

  VAR_13 = VAR_11;
  if (!VAR_6 && VAR_13[0] == '"') {
   FUNC_8(&VAR_9);
   if (FUNC_11(&VAR_9, VAR_13, ((void*)0))) {
    FUNC_1("git update-index: bad quoting of path name");
   }
   VAR_13 = VAR_9.buf;
  }

  if (!FUNC_12(VAR_13, VAR_15)) {
   FUNC_2(VAR_3, "Ignoring path %s\n", VAR_13);
   continue;
  }

  if (!VAR_15) {

   if (FUNC_4(VAR_13))
    FUNC_1("git update-index: unable to remove %s",
        VAR_11);
  }
  else {




   VAR_11[-(VAR_7 + 2)] = VAR_11[-1] = 0;
   if (FUNC_0(VAR_15, &VAR_14, VAR_13, VAR_17))
    FUNC_1("git update-index: unable to update %s",
        VAR_13);
  }
  continue;

 bad_line:
  FUNC_1("malformed index info %s", VAR_8.buf);
 }
 FUNC_7(&VAR_8);
 FUNC_7(&VAR_9);
}
