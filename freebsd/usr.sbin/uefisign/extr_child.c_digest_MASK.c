
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct executable {size_t x_checksum_off; size_t x_checksum_len; size_t x_certificate_entry_off; size_t x_certificate_entry_len; size_t x_headers_len; int x_nsections; size_t* x_section_off; size_t* x_section_len; size_t x_len; int x_digest_len; int x_digest; } ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int const*,int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (struct executable*,int *,size_t,size_t) ;
 int FUNC_7 (int,char*,...) ;
 size_t FUNC_8 (struct executable*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_9(struct executable *VAR_2)
{
 EVP_MD_CTX *VAR_3;
 const EVP_MD *VAR_4;
 size_t VAR_5;
 int VAR_6, VAR_7;






 VAR_4 = FUNC_5(VAR_0);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_1);
  FUNC_7(1, "EVP_get_digestbyname(\"%s\") failed", VAR_0);
 }

 VAR_3 = FUNC_3();
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_1);
  FUNC_7(1, "EVP_MD_CTX_create(3) failed");
 }

 VAR_7 = FUNC_2(VAR_3, VAR_4, ((void*)0));
 if (VAR_7 == 0) {
  FUNC_0(VAR_1);
  FUNC_7(1, "EVP_DigestInit_ex(3) failed");
 }
 FUNC_6(VAR_2, VAR_3, 0, VAR_2->x_checksum_off);





 FUNC_6(VAR_2, VAR_3, VAR_2->x_checksum_off + VAR_2->x_checksum_len,
     VAR_2->x_certificate_entry_off -
     (VAR_2->x_checksum_off + VAR_2->x_checksum_len));




 FUNC_6(VAR_2, VAR_3,
     VAR_2->x_certificate_entry_off + VAR_2->x_certificate_entry_len,
     VAR_2->x_headers_len -
     (VAR_2->x_certificate_entry_off + VAR_2->x_certificate_entry_len));






 VAR_5 = VAR_2->x_headers_len;
 for (VAR_6 = 0; VAR_6 < VAR_2->x_nsections; VAR_6++) {
  FUNC_6(VAR_2, VAR_3,
      VAR_2->x_section_off[VAR_6], VAR_2->x_section_len[VAR_6]);
  VAR_5 += VAR_2->x_section_len[VAR_6];
 }




 if (VAR_5 > VAR_2->x_len)
  FUNC_7(1, "number of bytes hashed is larger than file size");




 if (VAR_5 < VAR_2->x_len) {
  FUNC_6(VAR_2, VAR_3, VAR_5,
      VAR_2->x_len - (FUNC_8(VAR_2) + VAR_5));
 }

 VAR_7 = FUNC_1(VAR_3, VAR_2->x_digest, &VAR_2->x_digest_len);
 if (VAR_7 == 0) {
  FUNC_0(VAR_1);
  FUNC_7(1, "EVP_DigestFinal_ex(3) failed");
 }

 FUNC_4(VAR_3);
}
