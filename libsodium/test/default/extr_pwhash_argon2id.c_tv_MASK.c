
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char*,unsigned long long,char*,size_t,unsigned char const*,unsigned long long,size_t,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,unsigned char*,size_t) ;
 int FUNC_4 (unsigned char*,int,char const*,int ,int *,int *,int *) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(void)
{
    static struct {
        const char * passwd_hex;
        size_t passwd_len;
        const char * salt_hex;
        size_t outlen;
        unsigned long long opslimit;
        size_t memlimit;
        unsigned int lanes;
    } VAR_1[] = {
        { "a347ae92bce9f80f6f595a4480fc9c2fe7e7d7148d371e9487d75f5c23008ffae0"
          "65577a928febd9b1973a5a95073acdbeb6a030cfc0d79caa2dc5cd011cef02c08d"
          "a232d76d52dfbca38ca8dcbd665b17d1665f7cf5fe59772ec909733b24de97d6f5"
          "8d220b20c60d7c07ec1fd93c52c31020300c6c1facd77937a597c7a6",
          127,
          "5541fbc995d5c197ba290346d2c559dedf405cf97e5f95482143202f9e74f5c2",
          155, 5, 7256678, 1 },
        { "e125cee61c8cb7778d9e5ad0a6f5d978ce9f84de213a8556d9ffe202020ab4a6ed"
          "9074a4eb3416f9b168f137510f3a30b70b96cbfa219ff99f6c6eaffb15c06b60e0"
          "0cc2890277f0fd3c622115772f7048adaebed86e",
          86,
          "f1192dd5dc2368b9cd421338b22433455ee0a3699f9379a08b9650ea2c126f0d",
          250, 4, 7849083, 1 },
        { "92263cbf6ac376499f68a4289d3bb59e5a22335eba63a32e6410249155b956b6a3"
          "b48d4a44906b18b897127300b375b8f834f1ceffc70880a885f47c33876717e392"
          "be57f7da3ae58da4fd1f43daa7e44bb82d3717af4319349c24cd31e46d295856b0"
          "441b6b289992a11ced1cc3bf3011604590244a3eb737ff221129215e4e4347f491"
          "5d41292b5173d196eb9add693be5319fdadc242906178bb6c0286c9b6ca6012746"
          "711f58c8c392016b2fdfc09c64f0f6b6ab7b",
          183,
          "3b840e20e9555e9fb031c4ba1f1747ce25cc1d0ff664be676b9b4a90641ff194",
          249, 3, 7994791, 1 },
        { "027b6d8e8c8c474e9b69c7d9ed4f9971e8e1ce2f6ba95048414c3970f0f09b70e3"
          "b6c5ae05872b3d8678705b7d381829c351a5a9c88c233569b35d6b0b809df44b64"
          "51a9c273f1150e2ef8a0b5437eb701e373474cd44b97ef0248ebce2ca0400e1b53"
          "f3d86221eca3f18eb45b702b9172440f774a82cbf1f6f525df30a6e293c873cce6"
          "9bb078ed1f0d31e7f9b8062409f37f19f8550aae",
          152,
          "eb2a3056a09ad2d7d7f975bcd707598f24cd32518cde3069f2e403b34bfee8a5", 5,
          4, 1397645, 1 },
        { "4a857e2ee8aa9b6056f2424e84d24a72473378906ee04a46cb05311502d5250b82"
          "ad86b83c8f20a23dbb74f6da60b0b6ecffd67134d45946ac8ebfb3064294bc097d"
          "43ced68642bfb8bbbdd0f50b30118f5e",
          82,
          "39d82eef32010b8b79cc5ba88ed539fbaba741100f2edbeca7cc171ffeabf258",
          190, 3, 1432947, 1 },
        { "c7b09aec680e7b42fedd7fc792e78b2f6c1bea8f4a884320b648f81e8cf515e8ba"
          "9dcfb11d43c4aae114c1734aa69ca82d44998365db9c93744fa28b63fd16000e82"
          "61cbbe083e7e2da1e5f696bde0834fe53146d7e0e35e7de9920d041f5a5621aabe"
          "02da3e2b09b405b77937efef3197bd5772e41fdb73fb5294478e45208063b5f58e"
          "089dbeb6d6342a909c1307b3fff5fe2cf4da56bdae50848f",
          156,
          "039c056d933b475032777edbaffac50f143f64c123329ed9cf59e3b65d3f43b6",
          178, 3, 4886999, 1 },
        { "b540beb016a5366524d4605156493f9874514a5aa58818cd0c6dfffaa9e90205f1"
          "7b",
          34,
          "44071f6d181561670bda728d43fb79b443bb805afdebaf98622b5165e01b15fb",
          231, 1, 1631659, 1 },
        { "a14975c26c088755a8b715ff2528d647cd343987fcf4aa25e7194a8417fb2b4b3f"
          "7268da9f3182b4cfb22d138b2749d673a47ecc7525dd15a0a3c66046971784bb63"
          "d7eae24cc84f2631712075a10e10a96b0e0ee67c43e01c423cb9c44e5371017e9c"
          "496956b632158da3fe12addecb88912e6759bc37f9af2f45af72c5cae3b179ffb6"
          "76a697de6ebe45cd4c16d4a9d642d29ddc0186a0a48cb6cd62bfc3dd229d313b30"
          "1560971e740e2cf1f99a9a090a5b283f35475057e96d7064e2e0fc81984591068d"
          "55a3b4169f22cccb0745a2689407ea1901a0a766eb99",
          220,
          "3d968b2752b8838431165059319f3ff8910b7b8ecb54ea01d3f54769e9d98daf",
          167, 3, 1784128, 1 },
    };
    char VAR_2[256];
    unsigned char VAR_3[VAR_0];
    unsigned char VAR_4[256];
    char VAR_5[256 * 2 + 1];
    size_t VAR_6 = 0U;

    do {
        FUNC_4((unsigned char *) VAR_2, sizeof VAR_2,
                       VAR_1[VAR_6].passwd_hex, FUNC_5(VAR_1[VAR_6].passwd_hex), ((void*)0),
                       ((void*)0), ((void*)0));
        FUNC_4(VAR_3, sizeof VAR_3, VAR_1[VAR_6].salt_hex,
                       FUNC_5(VAR_1[VAR_6].salt_hex), ((void*)0), ((void*)0), ((void*)0));
        if (FUNC_0(VAR_4, (unsigned long long) VAR_1[VAR_6].outlen, VAR_2,
                          VAR_1[VAR_6].passwd_len, (const unsigned char *) VAR_3,
                          VAR_1[VAR_6].opslimit, VAR_1[VAR_6].memlimit,
                          FUNC_1()) != 0) {
            FUNC_2("[tv] pwhash failure (maybe intentional): [%u]\n",
                   (unsigned int) VAR_6);
            continue;
        }
        FUNC_3(VAR_5, sizeof VAR_5, VAR_4, VAR_1[VAR_6].outlen);
        FUNC_2("%s\n", VAR_5);
    } while (++VAR_6 < (sizeof VAR_1) / (sizeof VAR_1[0]));
}
