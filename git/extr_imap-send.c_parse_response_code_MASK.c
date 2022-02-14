
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imap_store {void* uidvalidity; struct imap* imap; } ;
struct imap_cmd_cb {scalar_t__ ctx; } ;
struct imap {void* uidnext; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 char* FUNC_3 (char**) ;
 int FUNC_4 (struct imap*,char*) ;
 int VAR_2 ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(struct imap_store *VAR_3, struct imap_cmd_cb *VAR_4,
          char *VAR_5)
{
 struct imap *VAR_6 = VAR_3->imap;
 char *VAR_7, *VAR_8;

 if (!VAR_5 || *VAR_5 != '[')
  return VAR_1;
 VAR_5++;
 if (!(VAR_8 = FUNC_5(VAR_5, ']'))) {
  FUNC_1(VAR_2, "IMAP error: malformed response code\n");
  return VAR_0;
 }
 *VAR_8++ = 0;
 VAR_7 = FUNC_3(&VAR_5);
 if (!VAR_7) {
  FUNC_1(VAR_2, "IMAP error: empty response code\n");
  return VAR_0;
 }
 if (!FUNC_6("UIDVALIDITY", VAR_7)) {
  if (!(VAR_7 = FUNC_3(&VAR_5)) || !(VAR_3->uidvalidity = FUNC_0(VAR_7))) {
   FUNC_1(VAR_2, "IMAP error: malformed UIDVALIDITY status\n");
   return VAR_0;
  }
 } else if (!FUNC_6("UIDNEXT", VAR_7)) {
  if (!(VAR_7 = FUNC_3(&VAR_5)) || !(VAR_6->uidnext = FUNC_0(VAR_7))) {
   FUNC_1(VAR_2, "IMAP error: malformed NEXTUID status\n");
   return VAR_0;
  }
 } else if (!FUNC_6("CAPABILITY", VAR_7)) {
  FUNC_4(VAR_6, VAR_5);
 } else if (!FUNC_6("ALERT", VAR_7)) {



  for (; FUNC_2((unsigned char)*VAR_8); VAR_8++);
  FUNC_1(VAR_2, "*** IMAP ALERT *** %s\n", VAR_8);
 } else if (VAR_4 && VAR_4->ctx && !FUNC_6("APPENDUID", VAR_7)) {
  if (!(VAR_7 = FUNC_3(&VAR_5)) || !(VAR_3->uidvalidity = FUNC_0(VAR_7)) ||
      !(VAR_7 = FUNC_3(&VAR_5)) || !(*(int *)VAR_4->ctx = FUNC_0(VAR_7))) {
   FUNC_1(VAR_2, "IMAP error: malformed APPENDUID status\n");
   return VAR_0;
  }
 }
 return VAR_1;
}
