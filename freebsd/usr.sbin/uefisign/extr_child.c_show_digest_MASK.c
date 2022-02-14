
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct executable {unsigned char x_digest_len; scalar_t__* x_digest; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(const struct executable *VAR_1)
{
 int VAR_2;

 FUNC_0("computed %s digest ", VAR_0);
 for (VAR_2 = 0; VAR_2 < (int)VAR_1->x_digest_len; VAR_2++)
  FUNC_0("%02x", (unsigned char)VAR_1->x_digest[VAR_2]);
 FUNC_0("; digest len %u\n", VAR_1->x_digest_len);
}
