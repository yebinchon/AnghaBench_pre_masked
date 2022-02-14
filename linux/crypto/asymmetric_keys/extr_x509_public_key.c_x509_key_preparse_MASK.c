
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x509_certificate {char* raw_skid; size_t raw_skid_size; size_t raw_serial_size; char* raw_serial; struct asymmetric_key_ids* sig; int * skid; int * id; struct asymmetric_key_ids* pub; int subject; scalar_t__ blacklisted; scalar_t__ unsupported_sig; int valid_to; int valid_from; scalar_t__ unsupported_key; int issuer; } ;
struct TYPE_2__ {struct asymmetric_key_ids** data; } ;
struct key_preparsed_payload {char* description; int quotalen; TYPE_1__ payload; int datalen; int data; } ;
struct asymmetric_key_ids {char* id_type; int owner; int ** id; int hash_algo; int pkey_algo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct x509_certificate*) ;
 int FUNC_1 (struct x509_certificate*) ;
 int FUNC_2 (int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 char* FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (int,int ) ;
 char* FUNC_6 (char*,int ,size_t) ;
 int FUNC_7 (char*,int ,...) ;
 int FUNC_8 (struct asymmetric_key_ids*) ;
 struct asymmetric_key_ids VAR_8 ;
 size_t FUNC_9 (int ) ;
 struct x509_certificate* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct x509_certificate*) ;

__attribute__((used)) static int FUNC_12(struct key_preparsed_payload *VAR_9)
{
 struct asymmetric_key_ids *VAR_10;
 struct x509_certificate *VAR_11;
 const char *VAR_12;
 size_t VAR_13, VAR_14;
 char *VAR_15 = ((void*)0), *VAR_16;
 int VAR_17;

 VAR_11 = FUNC_10(VAR_9->data, VAR_9->datalen);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 FUNC_7("Cert Issuer: %s\n", VAR_11->issuer);
 FUNC_7("Cert Subject: %s\n", VAR_11->subject);

 if (VAR_11->unsupported_key) {
  VAR_17 = -VAR_2;
  goto error_free_cert;
 }

 FUNC_7("Cert Key Algo: %s\n", VAR_11->pub->pkey_algo);
 FUNC_7("Cert Valid period: %lld-%lld\n", VAR_11->valid_from, VAR_11->valid_to);

 VAR_11->pub->id_type = "X509";

 if (VAR_11->unsupported_sig) {
  FUNC_8(VAR_11->sig);
  VAR_11->sig = ((void*)0);
 } else {
  FUNC_7("Cert Signature: %s + %s\n",
    VAR_11->sig->pkey_algo, VAR_11->sig->hash_algo);
 }


 VAR_17 = -VAR_0;
 if (VAR_11->blacklisted)
  goto error_free_cert;


 VAR_14 = FUNC_9(VAR_11->subject);
 if (VAR_11->raw_skid) {
  VAR_13 = VAR_11->raw_skid_size;
  VAR_12 = VAR_11->raw_skid;
 } else {
  VAR_13 = VAR_11->raw_serial_size;
  VAR_12 = VAR_11->raw_serial;
 }

 VAR_17 = -VAR_1;
 VAR_15 = FUNC_5(VAR_14 + 2 + VAR_13 * 2 + 1, VAR_3);
 if (!VAR_15)
  goto error_free_cert;
 VAR_16 = FUNC_6(VAR_15, VAR_11->subject, VAR_14);
 VAR_16 += VAR_14;
 *VAR_16++ = ':';
 *VAR_16++ = ' ';
 VAR_16 = FUNC_3(VAR_16, VAR_12, VAR_13);
 *VAR_16 = 0;

 VAR_10 = FUNC_5(sizeof(struct asymmetric_key_ids), VAR_3);
 if (!VAR_10)
  goto error_free_desc;
 VAR_10->id[0] = VAR_11->id;
 VAR_10->id[1] = VAR_11->skid;


 FUNC_2(VAR_8.owner);
 VAR_9->payload.data[VAR_7] = &VAR_8;
 VAR_9->payload.data[VAR_6] = VAR_10;
 VAR_9->payload.data[VAR_5] = VAR_11->pub;
 VAR_9->payload.data[VAR_4] = VAR_11->sig;
 VAR_9->description = VAR_15;
 VAR_9->quotalen = 100;


 VAR_11->pub = ((void*)0);
 VAR_11->id = ((void*)0);
 VAR_11->skid = ((void*)0);
 VAR_11->sig = ((void*)0);
 VAR_15 = ((void*)0);
 VAR_17 = 0;

error_free_desc:
 FUNC_4(VAR_15);
error_free_cert:
 FUNC_11(VAR_11);
 return VAR_17;
}
