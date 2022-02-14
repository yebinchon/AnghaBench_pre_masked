
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ustar_header {scalar_t__ chksum; } ;



__attribute__((used)) static unsigned int FUNC_0(const struct ustar_header *VAR_0)
{
 const unsigned char *VAR_1 = (const unsigned char *)VAR_0;
 unsigned int VAR_2 = 0;
 while (VAR_1 < (const unsigned char *)VAR_0->chksum)
  VAR_2 += *VAR_1++;
 VAR_2 += sizeof(VAR_0->chksum) * ' ';
 VAR_1 += sizeof(VAR_0->chksum);
 while (VAR_1 < (const unsigned char *)VAR_0 + sizeof(struct ustar_header))
  VAR_2 += *VAR_1++;
 return VAR_2;
}
